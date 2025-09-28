
# Questão 1 v2 - Lista Estoque

## Compilação e Execução
```bash
gcc main.c estoque.c -o estoque2
./estoque2
```

## Exemplo de Uso
```
ADD P10 "Caderno" 20 15.5
ADD P05 "Caneta" 100 2.0
LIST
REL
UPD P05 -20
LIST
EXIT
```

## Complexidade (Big-O)
- Inserir Produto Ordenado: O(n)
- Remover Produto: O(n)
- Modificar Quantidade: O(n)
- Buscar Produto: O(n)
- Listar Produtos: O(n)
- Liberar Lista: O(n)
