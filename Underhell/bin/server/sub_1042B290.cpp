int __thiscall sub_1042B290(int *this)
{
  int *v1; // edi
  int v2; // esi
  int v3; // edi
  int v4; // eax
  int *v5; // esi
  int *v6; // edi
  int v7; // eax
  bool v8; // zf
  int result; // eax
  int v10; // [esp-8h] [ebp-18h]

  v1 = this;
  v2 = this[6];
  if ( v2 )
  {
    do
    {
      v3 = *(_DWORD *)(v2 + 20);
      *(_DWORD *)(v2 + 20) = 0;
      sub_1042B290(v2);
      v4 = KeyValuesSystem();
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 8))(v4, v2);
      v2 = v3;
    }
    while ( v3 );
    v1 = this;
  }
  v5 = (int *)v1[5];
  if ( v5 )
  {
    do
    {
      if ( v5 == v1 )
        break;
      v6 = (int *)v5[5];
      v5[5] = 0;
      sub_1042B290(v5);
      v7 = KeyValuesSystem();
      (*(void (__thiscall **)(int, int *))(*(_DWORD *)v7 + 8))(v7, v5);
      v5 = v6;
      v8 = v6 == 0;
      v1 = this;
    }
    while ( !v8 );
  }
  sub_10184660(v1[1]);
  v10 = v1[2];
  v1[1] = 0;
  result = sub_10184660(v10);
  v1[2] = 0;
  return result;
}
