int __thiscall sub_1023C100(
        void *this,
        int a2,
        float *a3,
        char *Source,
        float a5,
        int a6,
        int a7,
        int a8,
        float a9,
        float *a10)
{
  double v11; // st7
  int v13[5]; // [esp+24h] [ebp-18h] BYREF
  void *v14; // [esp+38h] [ebp-4h]
  float Sourcea; // [esp+4Ch] [ebp+10h]

  memset(v13, 0, sizeof(v13));
  v14 = this;
  if ( sub_1013A6A0(a2, Source, a6, a5, a7, a8, a3, a9, v13) )
    return sub_102375F0(v13);
  v11 = 1.0;
  Sourcea = 1.0;
  if ( *(_DWORD *)(dword_106984AC + 48) )
  {
    v11 = *(float *)(dword_106984F4 + 44);
    Sourcea = *(float *)(dword_106984F4 + 44);
  }
  if ( !Source )
  {
LABEL_11:
    sub_1023BF10(v14, a2, (int)a3, Source, a5, a7, (int)(v11 * (double)a8 + (1.0 - v11) * (double)(a8 / 2)), a9, a10);
    return sub_102375F0(v13);
  }
  if ( !sub_10429530(Source, ".wav") && !sub_10429530(Source, ".mp3") )
  {
    v11 = Sourcea;
    goto LABEL_11;
  }
  (*(void (__thiscall **)(int, int, float *, char *, _DWORD, int, int, int, _DWORD))(*(_DWORD *)dword_106B31D0 + 108))(
    dword_106B31D0,
    a2,
    a3,
    Source,
    LODWORD(a5),
    a6,
    a7,
    (int)((1.0 - Sourcea) * (double)(a8 / 2) + Sourcea * (double)a8),
    LODWORD(a9));
  if ( a10 )
    *a10 = ((double (__thiscall *)(int, char *))*(_DWORD *)(*(_DWORD *)dword_106B31E8 + 12))(dword_106B31E8, Source);
  (*(void (**)(void *, const char *, ...))(*(_DWORD *)v14 + 64))(
    v14,
    "EmitAmbientSound:  Raw wave emitted '%s' (ent %i)\n",
    Source,
    a2);
  return sub_102375F0(v13);
}
