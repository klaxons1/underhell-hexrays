int __thiscall sub_101122E0(int *this, int a2)
{
  int *v3; // edi
  int *v4; // eax
  int *v5; // eax

  v3 = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  v4 = sub_100FE100(this + 6);
  if ( !v4 )
  {
    v5 = (int *)sub_10184390(8);
    if ( v5 )
    {
      v5[1] = -1;
      v5[1] = *v3;
      return sub_100FE090(this + 4, v5);
    }
    v4 = 0;
  }
  v4[1] = *v3;
  return sub_100FE090(this + 4, v4);
}
