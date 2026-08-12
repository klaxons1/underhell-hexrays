int __thiscall sub_10091870(int *this, _DWORD *a2, float a3, int a4, int a5)
{
  int v5; // edx
  int v7; // eax
  _DWORD v9[5]; // [esp+0h] [ebp-18h] BYREF
  int v10; // [esp+14h] [ebp-4h]

  v5 = a2[1];
  *(float *)&v9[3] = a3;
  v7 = a2[2];
  v9[0] = *a2;
  v9[4] = a5;
  v9[1] = v5;
  v9[2] = v7;
  if ( a4 )
    v10 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a4 + 8))(a4);
  else
    v10 = -1;
  return sub_10091230(this + 14, this[17], (int)v9);
}
