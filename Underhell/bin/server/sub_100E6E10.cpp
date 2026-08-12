int __thiscall sub_100E6E10(int this, int a2)
{
  int result; // eax
  int v4; // eax
  int v5; // eax
  int v6; // edi
  int v7; // ecx
  int v8; // eax
  int *v9; // eax
  _DWORD v10[4]; // [esp+8h] [ebp-10h] BYREF
  int v11; // [esp+20h] [ebp+8h]

  v10[0] = 0;
  v10[1] = 0;
  v10[2] = -2;
  v10[3] = -1;
  v10[0] = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10700A38 + 140))(dword_10700A38, a2);
  result = (unsigned __int16)sub_100DDB70((_WORD *)(this + 4), (int)v10);
  if ( (unsigned __int16)result == 0xFFFF )
  {
    v4 = sub_10184390(24);
    if ( v4 )
      v11 = sub_10185520(v4);
    else
      v11 = 0;
    v5 = *(_DWORD *)(this + 36);
    v6 = *(_DWORD *)(this + 44);
    if ( v6 + 1 > v5 )
      sub_102ABFC0(v6 - v5 + 1);
    ++*(_DWORD *)(this + 44);
    v7 = *(_DWORD *)(this + 32);
    v8 = *(_DWORD *)(this + 44) - v6 - 1;
    *(_DWORD *)(this + 48) = v7;
    if ( v8 > 0 )
      memcpy((void *)(v7 + 4 * v6 + 4), (const void *)(v7 + 4 * v6), 4 * v8);
    v9 = (int *)(*(_DWORD *)(this + 32) + 4 * v6);
    if ( v9 )
      *v9 = v11;
    result = (unsigned __int16)sub_100E3D30(this + 4, (int)v10);
    *(_DWORD *)(*(_DWORD *)(this + 8) + 24 * (unsigned __int16)result + 20) = v6;
  }
  return result;
}
