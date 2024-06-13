# Função para adicionar um item à lista
def adicionar_item(lista, item):
    """
    Adiciona um item ao final da lista fornecida.

    Parâmetros:
        lista (list): A lista à qual o item será adicionado.
        item (any): O item a ser adicionado à lista.

    Retorna:
        None
    """
    # Adiciona o item ao final da lista
    lista.append(item)
    # Mensagem indicando sucesso na operação
    print(f"Item '{item}' adicionado com sucesso!")

# Função para remover um item da lista
def remover_item(lista, item):
    """
    Remove um item da lista, se ele estiver presente.

    Parâmetros:
        lista (list): A lista da qual o item será removido.
        item (any): O item a ser removido da lista.

    Retorna:
        None
    """
    try:
        # Tenta remover o item
        lista.remove(item)
        # Mensagem indicando sucesso na operação
        print(f"Item '{item}' removido com sucesso!")
    except ValueError:
        # Mensagem de erro se o item não estiver na lista
        print(f"Erro: o item '{item}' não foi encontrado na lista.")

# Função para exibir os itens da lista
def exibir_lista(lista):
    """
    Imprime todos os itens da lista.

    Parâmetros:
        lista (list): A lista cujos itens serão exibidos.

    Retorna:
        None
    """
    # Verifica se a lista não está vazia
    if lista:
        # Imprime cada item da lista
        print("Itens na lista:")
        for item in lista:
            print(f"- {item}")
    else:
        # Mensagem se a lista estiver vazia
        print("A lista está vazia.")

# Lista inicial (vazia)
lista_de_compras = []

# Adicionando itens à lista
adicionar_item(lista_de_compras, "Maçã")
adicionar_item(lista_de_compras, "Banana")
adicionar_item(lista_de_compras, "Cenoura")

# Exibindo a lista
exibir_lista(lista_de_compras)

# Removendo um item
remover_item(lista_de_compras, "Banana")

# Exibindo a lista após a remoção
exibir_lista(lista_de_compras)