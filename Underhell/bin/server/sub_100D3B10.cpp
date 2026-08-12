void __thiscall sub_100D3B10(float *this)
{
  int v2; // eax
  int v3; // eax
  char v4; // al
  int v5; // edx

  if ( *((_DWORD *)this + 290) == 2
    && (*((_DWORD *)this + 292) != 2 || *((_DWORD *)this + 227) != *((_DWORD *)this + 291))
    && sub_100D1EB0(this) )
  {
    (*(void (__thiscall **)(float *, _DWORD))(*(_DWORD *)this + 944))(this, *((_DWORD *)this + 292));
  }
  if ( (!*((_BYTE *)this + 1264) || !*((_BYTE *)this + 1265))
    && this[318] < (double)*(float *)(dword_106B31C8 + 12)
    && this[317] < (double)*(float *)(dword_106B31C8 + 12) )
  {
    if ( sub_100D1940(this) )
    {
      v2 = sub_100D1940(this);
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 320))(v2) )
      {
        v3 = sub_100D1940(this);
        if ( v3 && sub_101E37E0(v3) > 0.0 )
        {
          v4 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 928))(this);
          v5 = *(_DWORD *)this;
          if ( v4 )
          {
            (*(void (__thiscall **)(float *))(v5 + 932))(this);
          }
          else if ( (*(unsigned __int8 (__thiscall **)(float *))(v5 + 916))(this) )
          {
            (*(void (__thiscall **)(float *))(*(_DWORD *)this + 920))(this);
          }
        }
        else
        {
          this[317] = *(float *)(dword_106B31C8 + 12) + 2.0;
        }
      }
    }
  }
}
