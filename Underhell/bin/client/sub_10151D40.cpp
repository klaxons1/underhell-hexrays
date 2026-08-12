int __thiscall sub_10151D40(_DWORD *this, float *a2)
{
  int v2; // eax
  int v3; // edi
  int i; // esi
  float v6[13]; // [esp+Ch] [ebp-5Ch] BYREF
  char v7; // [esp+43h] [ebp-25h]
  int v8; // [esp+60h] [ebp-8h]
  _DWORD *v9; // [esp+64h] [ebp-4h]
  int savedregs; // [esp+68h] [ebp+0h] BYREF

  v2 = this[351];
  v3 = 0;
  v9 = this;
  v8 = v2;
  if ( v2 <= 0 )
    return -1;
  for ( i = 0; ; i += 36 )
  {
    sub_1012D510(COERCE_FLOAT(&savedregs), a2, a2, &flt_10459240, &flt_10459240, *(_DWORD *)(i + this[348] + 4), 0, v6);
    if ( v7 )
      break;
    if ( ++v3 >= v8 )
      return -1;
    this = v9;
  }
  return v3;
}
