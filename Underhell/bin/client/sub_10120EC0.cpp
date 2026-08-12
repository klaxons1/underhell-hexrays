int __thiscall sub_10120EC0(void *this, int a2, int a3, int a4, int a5)
{
  int v5; // ebx
  _DWORD *v6; // eax
  int v7; // eax
  int result; // eax
  int v9; // ebx
  int v10; // edx
  double v11; // st7
  float v12; // [esp+38h] [ebp-BCh]
  int v13; // [esp+4Ch] [ebp-A8h] BYREF
  float v14; // [esp+50h] [ebp-A4h]
  int v15; // [esp+54h] [ebp-A0h]
  int v16; // [esp+58h] [ebp-9Ch]
  int v17; // [esp+5Ch] [ebp-98h]
  int v18; // [esp+60h] [ebp-94h]
  char v19; // [esp+64h] [ebp-90h]
  int v20; // [esp+68h] [ebp-8Ch]
  char v21[128]; // [esp+6Ch] [ebp-88h] BYREF
  int v22; // [esp+ECh] [ebp-8h]
  void *v23; // [esp+F0h] [ebp-4h]

  v14 = 1.0;
  v15 = 100;
  v16 = 100;
  v17 = 100;
  v23 = this;
  v13 = 0;
  v18 = 75;
  v21[0] = 0;
  v19 = 0;
  v20 = 0;
  v22 = 0;
  v5 = 0;
  v6 = (_DWORD *)sub_10036480(a3);
  if ( v6 )
  {
    v7 = sub_10034E90(v6);
    v5 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_104131AC + 136))(dword_104131AC, v7);
  }
  result = (*(int (__thiscall **)(int, _DWORD, int, int *, int, int))(*(_DWORD *)dword_104131AC + 164))(
             dword_104131AC,
             *(_DWORD *)(a4 + 4),
             a5,
             &v13,
             v5,
             1);
  if ( (_BYTE)result && v21[0] )
  {
    if ( !sub_10227BC0(v21, "vo", 2) && v13 != 5 && v13 != 2 )
      DevMsg(
        "EmitSound:  Voice wave file %s doesn't specify CHAN_VOICE or CHAN_STREAM for sound %s\n",
        v21,
        *(const char **)(a4 + 4));
    v9 = *(_DWORD *)(a4 + 16);
    if ( (v9 & 2) != 0 )
    {
      v10 = *(_DWORD *)(a4 + 20);
      v15 = v10;
    }
    else
    {
      v10 = v15;
    }
    if ( *(_DWORD *)(dword_104017E4 + 48) )
    {
      v10 = (int)((1.0 - *(float *)(dword_1040182C + 44)) * (double)(v10 / 2)
                + (double)v15 * *(float *)(dword_1040182C + 44));
      v15 = v10;
    }
    if ( (v9 & 1) != 0 )
      v14 = *(float *)(a4 + 8);
    v11 = *(float *)(a4 + 28);
    if ( 0.0 == v11 && v22 )
      v11 = (double)v22 * 0.001 + *((float *)off_103DC81C + 3);
    v12 = v11;
    (*(void (__stdcall **)(int, int, int, char *, float, int, int, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD))(*(_DWORD *)dword_10413194 + 16))(
      a2,
      a3,
      v13,
      v21,
      COERCE_FLOAT(LODWORD(v14)),
      v18,
      v9 | 0x80,
      v10,
      *(_DWORD *)(a4 + 24),
      0,
      a4 + 44,
      1,
      LODWORD(v12),
      *(_DWORD *)(a4 + 40));
    if ( *(_DWORD *)(a4 + 32) )
      **(float **)(a4 + 32) = ((double (__thiscall *)(int, char *))*(_DWORD *)(*(_DWORD *)dword_10413194 + 12))(
                                dword_10413194,
                                v21);
    result = (*(int (**)(void *, const char *, ...))(*(_DWORD *)v23 + 64))(
               v23,
               "EmitSound:  '%s' emitted as '%s' (ent %i)\n",
               *(_DWORD *)(a4 + 4),
               v21,
               a3);
    if ( (*(_BYTE *)(a4 + 16) & 3) == 0 )
      return sub_10120C40(v23, a2, a3, (int)&v13, a4);
  }
  return result;
}
