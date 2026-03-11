section .data
    prompt    db "Enter 10 numbers:", 10, 0
    fmt_in    db "%d", 0
    fmt_out   db "%d ", 0
    newline   db 10, 0
    sorted_msg db "Sorted numbers:", 10, 0

section .bss
    arr       resd 10        ; Reserve 10 double-words (40 bytes)

section .text
    global main
    extern printf, scanf

main:
    push rbp
    mov rbp, rsp
    sub rsp, 32              ; Shadow space/alignment

    ; printf("Enter 10 numbers:\n");
    mov rdi, prompt
    xor rax, rax
    call printf

    ; Input loop
    mov rcx, 0
input_loop:
    cmp rcx, 10
    je sort_init
    
    ; scanf("%d", &arr[i]);
    lea rsi, [arr + rcx*4]
    mov rdi, fmt_in
    xor rax, rax
    call scanf
    
    inc rcx
    jmp input_loop

sort_init:
    ; Bubble sort
    mov rdi, 0 ; i (outer loop counter)
outer_loop:
    cmp rdi, 9
    jge print_results
    
    mov rsi, 0 ; j (inner loop counter)
inner_loop:
    mov rax, 9
    sub rax, rdi
    cmp rsi, rax
    jge next_outer
    
    ; if (arr[j] > arr[j + 1])
    mov eax, [arr + rsi*4]
    cmp eax, [arr + (rsi+1)*4]
    jle no_swap
    
    ; Swap
    mov edx, [arr + (rsi+1)*4]
    mov [arr + (rsi+1)*4], eax
    mov [arr + rsi*4], edx

no_swap:
    inc rsi
    jmp inner_loop

next_outer:
    inc rdi
    jmp outer_loop

print_results:
    ; printf("Sorted numbers:\n");
    mov rdi, sorted_msg
    xor rax, rax
    call printf

    ; Output loop
    mov rcx, 0
output_loop:
    cmp rcx, 10
    je done
    
    ; printf("%d ", arr[i]);
    mov esi, [arr + rcx*4]
    mov rdi, fmt_out
    xor rax, rax
    call printf
    
    inc rcx
    jmp output_loop

done:
    ; Newline
    mov rdi, newline
    xor rax, rax
    call printf

    mov rsp, rbp
    pop rbp
    mov rax, 0
    ret
