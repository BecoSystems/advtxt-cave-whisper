 /****************************************************************************
 *   ex11.h                                                                  *
 *                                                                           *
 *   Adventure Text (Cave Whisper)                                           *
 *   Copyright (C) 2025                                                      *
 *   Alunos: Jamerson david / Pedro Victor                                   *
 *****************************************************************************

#ifndef _EX11_H
#define _EX11_H

/* includes */
#include <stdio.h>

/* definitions */
#define VERSION "20250423.143000"
#define SBUFF 256

/* globals */
extern int escolha;

/* ------------------------------------------------------------------------- */
/* prototypes */
void game_init(void);
void abrir_bau(void);
void escolha_item(void);
void fim_jogo(const char *msg);
void help(void);
void copyr(void);

#endif /* _EX11_H */

