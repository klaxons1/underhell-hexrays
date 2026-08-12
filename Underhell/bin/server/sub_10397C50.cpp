int __thiscall sub_10397C50(float *this)
{
  int v2; // eax
  int v3; // edi
  int v4; // eax
  int result; // eax
  _DWORD *v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax

  if ( !sub_10023D10(this, 50)
    || (v2 = (*(int (__thiscall **)(float *, int))(*(_DWORD *)this + 1460))(this, 8), (v3 = v2) == 0)
    || (v4 = *(_DWORD *)(v2 + 16), (v4 & 8) == 0) )
  {
    if ( (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this) )
    {
      if ( *(float *)(dword_106B31C8 + 12) - this[1113] > -0.001 )
      {
        v6 = (_DWORD *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 2424))(this);
        if ( sub_10050FC0(v6) )
        {
          v7 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this);
          if ( sub_103960A0(v7) )
          {
            v8 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this);
            if ( (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v8 + 368))(v8) == this )
            {
              v9 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this);
              if ( (*(unsigned __int8 (__thiscall **)(int, float *))(*(_DWORD *)v9 + 876))(v9, this) )
              {
                v10 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this);
                if ( (*(unsigned __int8 (__thiscall **)(int, float *, int, _DWORD))(*(_DWORD *)v10 + 548))(
                       v10,
                       this,
                       16449,
                       0) )
                {
                  result = 96;
                  this[1113] = *(float *)(dword_106B31C8 + 12) + 7.0;
                  return result;
                }
              }
            }
          }
        }
      }
    }
    if ( !sub_10023D10(this, 58) )
    {
      if ( !sub_10023D10(this, 76) )
        return 0;
      sub_10023E00((char *)this, 76);
    }
    return 68;
  }
  if ( (v4 & 0x500000) == 0 || sub_10093C50(this) )
    (*(void (__thiscall **)(float *, const char *, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this + 2344))(
      this,
      "TLK_DANGER",
      0,
      0,
      0,
      0);
  if ( sub_10023D10(this, 77) )
    return 40;
  else
    return (*(_DWORD *)(v3 + 16) & 0x100000) != 0 ? 40 : 28;
}
