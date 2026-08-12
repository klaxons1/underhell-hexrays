void __thiscall sub_1016FAA0(int *this)
{
  double v2; // st7
  int v3; // eax
  int v4; // edi
  int v5; // eax
  int v6; // edi
  int i; // ebx
  int v8; // edx
  int v9; // edi
  int v10; // ecx
  int v11; // eax
  int v12; // edx

  v2 = 120.0 / *(float *)(dword_106B31C8 + 28) + 0.5;
  sub_1016F900(
    this,
    (*(_DWORD *)(dword_106B31C8 + 24) - (int)v2) & ((*(_DWORD *)(dword_106B31C8 + 24) - (int)v2 < 0) - 1));
  v3 = *this;
  if ( *((float *)this + 5) >= 10.0 )
  {
    if ( this[11] <= 0 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(int *))(v3 + 52))(this) )
      {
        v4 = this[6];
        this[13] = v4 + (int)(8.0 / *(float *)(dword_106B31C8 + 28) + 0.5);
        if ( v4 > 0 )
        {
          for ( i = sub_1016ECF0(this, v4); i != 0xFFFF; i = (unsigned __int16)sub_1016DF30(this + 100, i) )
          {
            v8 = this[101];
            v9 = v8 + 20 * (unsigned __int16)i + 8;
            if ( *(_DWORD *)v9 >= this[13] )
              break;
            v10 = *(_DWORD *)(v8 + 20 * (unsigned __int16)i + 16);
            if ( !strcmp((const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v10 + 4))(v10), "hltv_cameraman")
              && (*(int (__thiscall **)(_DWORD, const char *, _DWORD))(**(_DWORD **)(v9 + 8) + 24))(
                   *(_DWORD *)(v9 + 8),
                   "index",
                   0) > 0 )
            {
              this[13] = *(_DWORD *)v9;
              break;
            }
          }
          if ( (double)(this[13] - this[6]) * *(float *)(dword_106B31C8 + 28) >= 4.0 )
          {
            v11 = (*(int (__thiscall **)(int *))(*this + 68))(this);
            v12 = *this;
            if ( v11 )
              (*(void (__thiscall **)(int *, int))(v12 + 72))(this, v11);
            else
              (*(void (__thiscall **)(int *))(v12 + 16))(this);
          }
        }
        else
        {
          v5 = (*(int (__thiscall **)(int, const char *, int))(*(_DWORD *)dword_106B31F8 + 24))(
                 dword_106B31F8,
                 "hltv_message",
                 1);
          v6 = v5;
          if ( v5 )
          {
            (*(void (__thiscall **)(int, const char *, const char *))(*(_DWORD *)v5 + 48))(
              v5,
              "text",
              "Please wait for broadcast to start ...");
            (*(void (__thiscall **)(int, int))(*(_DWORD *)this[4] + 40))(this[4], v6);
            (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_106B31F8 + 40))(dword_106B31F8, v6);
          }
          (*(void (__thiscall **)(int *, int))(*this + 24))(this, 1);
        }
      }
    }
    else
    {
      (*(void (__fastcall **)(int *))(v3 + 60))(this);
    }
  }
  else
  {
    (*(void (__thiscall **)(int *))(v3 + 56))(this);
  }
}
