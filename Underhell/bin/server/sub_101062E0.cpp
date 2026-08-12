int __thiscall sub_101062E0(int *this, int a2, int a3)
{
  int v4; // ebx
  int v5; // esi
  int v6; // eax
  _DWORD v8[4]; // [esp+Ch] [ebp-10h] BYREF

  v4 = (int)sub_100FE100(&dword_1069A680);
  if ( !v4 )
  {
    v4 = sub_10184390(6144);
    if ( (v4 & 7) != 0 )
      __debugbreak();
  }
  v5 = 0;
  memset(v8, 0, sizeof(v8));
  if ( this[1031] > 0 )
  {
    do
    {
      v6 = sub_10245BF0(v5);
      sub_101058D0(this, v6, v5++, a2, a3, v4, (int)v8);
    }
    while ( v5 < this[1031] );
  }
  return sub_100FE090(&dword_1069A680, (int *)v4);
}
