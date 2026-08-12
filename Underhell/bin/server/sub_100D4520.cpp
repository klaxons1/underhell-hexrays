void __thiscall sub_100D4520(int *this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // ecx
  char *v5; // edi
  int v6; // ebx
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  int v10; // [esp+4h] [ebp-4h] BYREF

  v2 = this[280];
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (this[280] & 0xFFF) + 1];
    if ( v3[1] == v2 >> 12 )
    {
      v4 = *v3;
      if ( v4 )
      {
        v5 = (char *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 288))(v4);
        if ( v5 )
        {
          if ( (*(unsigned __int8 (__thiscall **)(int *))(*this + 1272))(this) )
          {
            v6 = (*(int (__thiscall **)(int *))(*this + 1216))(this) - this[300];
            if ( v6 >= sub_100CF5D0(v5, this[298]) )
              v7 = sub_100CF5D0(v5, this[298]);
            else
              v7 = (*(int (__thiscall **)(int *))(*this + 1216))(this) - this[300];
            v10 = v7;
            sub_100D2E00(this + 300, &v10);
            sub_100CF490(v5, v7, this[298]);
          }
          if ( (*(unsigned __int8 (__thiscall **)(int *))(*this + 1276))(this) )
          {
            v8 = (*(int (__thiscall **)(int *))(*this + 1220))(this) - this[301];
            if ( v8 >= sub_100CF5D0(v5, this[299]) )
              v9 = sub_100CF5D0(v5, this[299]);
            else
              v9 = (*(int (__thiscall **)(int *))(*this + 1220))(this) - this[301];
            v10 = v9;
            sub_100D2E50(this + 301, &v10);
            sub_100CF490(v5, v9, this[299]);
          }
          if ( *((_BYTE *)this + 1228) )
            *((_BYTE *)this + 1144) = 0;
        }
      }
    }
  }
}
