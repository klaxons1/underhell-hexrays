int __thiscall sub_10103BD0(_DWORD *this, int a2)
{
  int result; // eax
  void *v3; // esi
  float v4[18]; // [esp+0h] [ebp-54h] BYREF
  __int16 v5; // [esp+48h] [ebp-Ch]
  int v6; // [esp+4Ch] [ebp-8h]
  int v7; // [esp+50h] [ebp-4h]

  result = (*(int (__thiscall **)(_DWORD *, int))(this[490] + 92))(this + 490, 13);
  if ( (_BYTE)result )
  {
    v3 = sub_100F74C0();
    sub_1000F8E0(v4, (int)v3);
    v4[14] = *((float *)v3 + 14);
    v4[15] = *((float *)v3 + 15);
    v4[16] = *((float *)v3 + 16);
    v4[17] = *((float *)v3 + 17);
    v5 = *((_WORD *)v3 + 36);
    result = *((_DWORD *)v3 + 19);
    v6 = result;
    v7 = *((_DWORD *)v3 + 20);
    if ( result )
      return sub_1012D5F0(v4, 0);
  }
  return result;
}
