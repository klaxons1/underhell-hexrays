char __thiscall sub_100246E0(int *this, _DWORD *a2)
{
  int v3; // eax
  int v4; // ebx
  int v5; // eax

  v3 = (*(int (__thiscall **)(int *, _DWORD *))(*this + 1080))(this, a2);
  if ( *((_BYTE *)this + 2112) )
  {
    if ( v3 == 4 )
    {
      LOBYTE(v3) = (*(int (__thiscall **)(_DWORD *))(*a2 + 284))(a2);
      if ( (_BYTE)v3 )
      {
        (*(void (__thiscall **)(_DWORD *))(*a2 + 2160))(a2);
        v3 = sub_1007DB30(10);
        if ( v3 != -1 )
        {
          v3 -= 1000000000;
          if ( v3 != -1 )
          {
            LOBYTE(v3) = ((1 << (v3 & 0x1F)) & a2[(v3 >> 5) + 548]) != 0;
            if ( (_BYTE)v3 )
            {
              LOBYTE(v3) = sub_10023D10(this, 10);
              if ( !(_BYTE)v3 )
              {
                v3 = this[699];
                if ( !v3 || v3 != a2[699] )
                {
                  v4 = *this;
                  v5 = (*(int (__thiscall **)(_DWORD *))(*a2 + 368))(a2);
                  LOBYTE(v3) = (*(int (__thiscall **)(int *, int))(v4 + 2140))(this, v5);
                }
              }
            }
          }
        }
      }
    }
  }
  return v3;
}
