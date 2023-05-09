#define TOTAL 30

typedef struct {
    char Registro[12];
    char nome[36];
    int horasDeVoo;
    char email[36];
} Piloto;

typedef struct {
    char Numero[12];
    char cidadeOrigem[36];
    char cidadeDestino[36];
    char modeloAviao[12];
} Voo;