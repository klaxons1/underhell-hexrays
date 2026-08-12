void __thiscall sub_10316A80(int *this)
{
  unsigned int v2; // eax
  int v3; // eax
  _DWORD *v4; // esi
  int v5; // ebx
  int *v6; // eax
  int v7; // ecx
  int v8; // eax

  sub_102B3320(this);
  (*(void (__thiscall **)(int *))(*this + 408))(this);
  v2 = this[1032];
  if ( v2 == -1 || off_1061BE18[4 * (this[1032] & 0xFFF) + 2] != v2 >> 12 )
    v3 = 0;
  else
    v3 = off_1061BE18[4 * (this[1032] & 0xFFF) + 1];
  sub_1025FAC0(v3);
  sub_10315790(this);
  v4 = this + 1062;
  v5 = 3;
  do
  {
    if ( *v4 != -1 )
    {
      v6 = &off_1061BE18[4 * (*v4 & 0xFFF) + 1];
      v7 = *v4 >> 12;
      if ( off_1061BE18[4 * (*v4 & 0xFFF) + 2] == v7 )
      {
        if ( *v6 )
        {
          if ( off_1061BE18[4 * (*v4 & 0xFFF) + 2] == v7 )
            v8 = *v6;
          else
            v8 = 0;
          sub_1025FAC0(v8);
          *v4 = -1;
        }
      }
    }
    ++v4;
    --v5;
  }
  while ( v5 );
  sub_101BD250(this + 985);
}
