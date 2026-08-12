int __thiscall sub_1003CF30(int *this, int a2, int *a3, int a4, char a5)
{
  int v6; // edi
  int **v7; // eax
  int result; // eax
  int *v9; // ecx
  int v10; // edi
  char v11; // al
  float v12; // [esp+8h] [ebp-1Ch]
  _DWORD v13[3]; // [esp+18h] [ebp-Ch] BYREF

  v6 = 0;
  if ( this[8] <= 0 )
    goto LABEL_8;
  v7 = (int **)(this[5] + 8);
  while ( *v7 != a3 )
  {
    ++v6;
    v7 += 3;
    if ( v6 >= this[8] )
      goto LABEL_8;
  }
  result = a4 ^ (*(int (__thiscall **)(int *))(*a3 + 28))(a3);
  if ( (result & 8) != 0 )
  {
    sub_1003BDA0(this, *(_DWORD *)(this[5] + 12 * v6 + 4), 1);
LABEL_8:
    v13[1] = a2;
    HIWORD(v13[0]) = 1;
    v13[2] = a3;
    LOWORD(v13[0]) = a4;
    v9 = this + 5;
    if ( (a4 & 8) != 0 )
    {
      result = sub_1003BE10(v9, this[8], v13);
    }
    else
    {
      result = sub_1003BE10(v9, 0, v13);
      ++this[10];
    }
  }
  if ( a5 )
  {
    (*(void (__thiscall **)(int *, int, int))(*a3 + 4))(a3, a2, a4);
    v10 = *a3;
    v11 = (*(int (__thiscall **)(int *))(*a3 + 28))(a3);
    v12 = sub_10038610((int)this, v11);
    return (*(int (__thiscall **)(int *, _DWORD))(v10 + 8))(a3, LODWORD(v12));
  }
  return result;
}
