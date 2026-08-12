void __thiscall sub_103386A0(float *this, __int64 a2, int a3, int a4)
{
  int v5; // eax
  int v6; // edi
  unsigned __int8 (__thiscall *v7)(float *); // eax
  float v8; // [esp+1Ch] [ebp-18h]
  __int64 v9; // [esp+20h] [ebp-14h]

  sub_1010DD80((_DWORD *)this + 1471, a2, 0.0);
  if ( *(_DWORD *)(dword_106B31C8 + 20) == 1 && sub_10335530(this) )
  {
    if ( (_DWORD)a2 == sub_10261B20() )
    {
      v5 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 1656))(this);
      sub_100B0060(v5, "TLK_HELLO", 0, 1);
      if ( *(_DWORD *)(dword_106E6064 + 48) )
      {
        if ( *(_DWORD *)(dword_106E601C + 48) )
        {
          if ( !sub_100296A0(this) )
          {
            if ( *(_DWORD *)(dword_106E6064 + 48) )
              sub_10337BF0(this);
          }
        }
        else
        {
          sub_10337D80(this);
        }
      }
      else if ( *((_DWORD *)this + 531) )
      {
        if ( sub_10024070(this, 2) )
        {
          if ( (*(unsigned __int8 (__thiscall **)(float *, const char *, _DWORD, int, _DWORD, _DWORD))(*(_DWORD *)this + 2344))(
                 this,
                 "TLK_QUESTION",
                 0,
                 1,
                 0,
                 0) )
          {
            if ( (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 1, 4) < 4 )
            {
              v6 = sub_10093460(this, 2);
              if ( v6 )
              {
                v8 = *(float *)((*(int (__thiscall **)(float *))(*(_DWORD *)this + 1656))(this) + 44)
                   - *(float *)(dword_106B31C8 + 12)
                   + 0.2;
                sub_1010C7F0((float *)dword_10614CA8, v6, "SpeakIdleResponse", v8, (int)this, (int)this, 0);
              }
            }
          }
        }
      }
    }
  }
  else
  {
    v7 = *(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)this + 2336);
    *((_BYTE *)this + 4164) = 1;
    if ( !v7(this)
      && (((_DWORD)this[62] & 0x100000) != 0
       || (*(int (__thiscall **)(float *, _DWORD))(*(_DWORD *)this + 1080))(this, a2) == 4) )
    {
      HIDWORD(v9) = this;
      LODWORD(v9) = this;
      sub_1010DD80((_DWORD *)this + 826, v9, 0.0);
    }
    *((_BYTE *)this + 4164) = 0;
  }
}
