int __thiscall sub_103C8590(int this, int a2, float *a3, int a4)
{
  char *v5; // edx
  _DWORD *v6; // ecx
  double v7; // st7
  int v8; // eax
  double v9; // st7
  int v11[11]; // [esp+Ch] [ebp-5Ch] BYREF
  unsigned int v12; // [esp+38h] [ebp-30h]
  float v13; // [esp+40h] [ebp-28h]
  int v14; // [esp+4Ch] [ebp-1Ch]
  float v15[3]; // [esp+5Ch] [ebp-Ch] BYREF

  sub_1001E4E0(v11, a2);
  if ( (v14 & 0x100) == 0 )
    goto LABEL_11;
  v5 = *(char **)(this + 92);
  if ( !v5 )
    v5 = (char *)String;
  v6 = v12 == -1 || off_1061BE18[4 * (v12 & 0xFFF) + 2] != v12 >> 12 ? 0 : (_DWORD *)off_1061BE18[4 * (v12 & 0xFFF) + 1];
  if ( (char *)v6[23] == v5 || sub_100D6240(v6, v5) )
  {
    v7 = 0.0099999998;
    v13 = 0.0099999998;
  }
  else
  {
LABEL_11:
    v7 = v13;
  }
  v8 = *(_DWORD *)(a4 + 68);
  if ( v8 >= 2 )
  {
    if ( v8 <= 3 )
    {
      if ( (v14 & 0x46) != 0 )
        v13 = v7 * 0.5;
    }
    else if ( v8 == 10 )
    {
      if ( (v14 & 0x86) != 0 && (v9 = v7 - 20.0, v13 = v9, v9 <= 0.0) )
      {
        v15[0] = *a3 * -1.0;
        v15[1] = a3[1] * -1.0;
        v15[2] = -1.0 * a3[2];
        ((void (__thiscall *)(int (__stdcall ***)(char), int, float *))(*off_1061B7A0)[8])(off_1061B7A0, a4 + 12, v15);
        v13 = 0.0099999998;
        *(_DWORD *)(a4 + 68) = 1;
      }
      else
      {
        *(_DWORD *)(a4 + 68) = 1;
      }
    }
  }
  return sub_100931B0((_BYTE *)this, v11, (int)a3, a4);
}
