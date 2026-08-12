char *__thiscall sub_10067DE0(int this, void *Src, char *Source, float a4)
{
  __int16 v5; // ax
  int v6; // esi
  char *result; // eax
  __int16 v8; // [esp+8h] [ebp-90h] BYREF
  char v9; // [esp+Ah] [ebp-8Eh]
  float v10; // [esp+4Ch] [ebp-4Ch]
  __int16 v11; // [esp+50h] [ebp-48h] BYREF
  char v12; // [esp+52h] [ebp-46h]
  float v13; // [esp+94h] [ebp-4h]

  v13 = 0.0;
  v12 = 0;
  sub_1042FB30(Src);
  v11 = HIWORD(Src);
  v5 = sub_10066560((_WORD *)this, (int)&v11);
  if ( v5 == -1 )
  {
    v10 = 0.0;
    v9 = 0;
    sub_1042FB30(Src);
    v8 = HIWORD(Src);
    v5 = sub_10067C30(this, (int)&v8);
  }
  v6 = *(_DWORD *)(this + 4) + 80 * v5 + 8;
  result = Source;
  if ( Source )
  {
    result = (char *)sub_104299C0((char *)(v6 + 2), Source, 0x40u);
    *(float *)(v6 + 68) = a4;
  }
  else
  {
    *(float *)(v6 + 68) = a4;
    *(_BYTE *)(v6 + 2) = 0;
  }
  return result;
}
