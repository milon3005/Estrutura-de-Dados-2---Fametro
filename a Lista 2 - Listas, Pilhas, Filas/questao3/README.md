
# Questão 3 v2 - Pilha Processos

## Compilação e Execução
```bash
gcc main.c pilha.c -o processos2
./processos2
```

## Exemplo de Uso
```
CALL main 100
CALL f1 80
PEEK
TRACE
RET
TRACE
EXIT
```

## Complexidade (Big-O)
- Push (empilhar): O(1)
- Pop (desempilhar): O(1)
- Peek (consultar topo): O(1)
- Verificar se Vazia: O(1)
- Limpar Pilha: O(n)
