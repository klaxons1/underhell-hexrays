unsigned int __thiscall sub_101E8800(_DWORD *this)
{
  unsigned int v2; // eax
  int v3; // eax
  unsigned int v4; // edi
  unsigned int result; // eax
  void (__thiscall *v6)(_DWORD *, int); // edx
  int *v7; // ecx
  _DWORD *v8; // edi
  int v9; // ebx
  float *v10; // eax
  float *v11; // eax
  unsigned int v12; // eax
  int v13; // ecx
  int v14; // edx
  int v15; // eax
  float *v16; // [esp-8h] [ebp-14h]
  int v17; // [esp-4h] [ebp-10h]
  int v18; // [esp+8h] [ebp-4h]

  if ( *((_BYTE *)this + 3508) )
  {
    v2 = this[876];
    if ( v2 == -1 || off_1061BE18[4 * (this[876] & 0xFFF) + 2] != v2 >> 12 )
      v3 = 0;
    else
      v3 = off_1061BE18[4 * (this[876] & 0xFFF) + 1];
    v4 = v3;
    result = (*(int (__thiscall **)(_DWORD *, int))(*this + 1356))(this, v3);
    if ( !(_BYTE)result )
    {
      result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 1348))(this, 0);
      v4 = result;
    }
    if ( v4 )
    {
      v6 = *(void (__thiscall **)(_DWORD *, int))(*this + 1328);
      v17 = this[875];
      *((_BYTE *)this + 3508) = 0;
      v6(this, v17);
      return (*(int (__thiscall **)(_DWORD *, unsigned int))(*this + 1336))(this, v4);
    }
  }
  else
  {
    if ( (int)this[875] < 3 )
      this[875] = 6;
    result = this[870];
    if ( result == 4 || result == 5 || result == 3 )
    {
      (*(void (__thiscall **)(_DWORD *))(*this + 1376))(this);
      result = this[876];
      if ( result != -1 )
      {
        v7 = &off_1061BE18[4 * (this[876] & 0xFFF) + 1];
        result >>= 12;
        if ( off_1061BE18[4 * (this[876] & 0xFFF) + 2] == result )
        {
          v8 = (_DWORD *)*v7;
          if ( *v7 )
          {
            result = (*(int (__thiscall **)(int))(*v8 + 320))(*v7);
            if ( (_BYTE)result )
            {
              if ( this[870] == 4 )
              {
                v18 = this[64];
                v9 = v8[64] & 3;
                if ( (v18 & 3) != v9 )
                {
                  sub_100EAA00(this);
                  sub_100EA940(this, v9 | v18 & 0xFFFFFFFC);
                }
                v16 = (float *)(*(int (__thiscall **)(_DWORD *))(*this + 532))(this);
                v10 = (float *)(*(int (__thiscall **)(_DWORD *))(*v8 + 532))(v8);
                if ( sub_1001F080(v10, v16) )
                {
                  v11 = (float *)(*(int (__thiscall **)(_DWORD *))(*v8 + 532))(v8);
                  sub_100DC4E0((float *)this, v11);
                }
              }
              v12 = v8[609];
              if ( v12 == -1 || off_1061BE18[4 * (v8[609] & 0xFFF) + 2] != v12 >> 12 )
                v13 = 0;
              else
                v13 = off_1061BE18[4 * (v8[609] & 0xFFF) + 1];
              result = this[609];
              if ( result == -1 || (result >>= 12, off_1061BE18[4 * (this[609] & 0xFFF) + 2] != result) )
                v14 = 0;
              else
                v14 = off_1061BE18[4 * (this[609] & 0xFFF) + 1];
              if ( v13 != v14 )
              {
                v15 = sub_1026A890(v8 + 609);
                return sub_101E6360(this + 609, v15);
              }
            }
          }
        }
      }
    }
  }
  return result;
}
