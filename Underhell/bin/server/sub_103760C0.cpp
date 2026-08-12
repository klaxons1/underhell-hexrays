void __thiscall sub_103760C0(int this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  _DWORD *v6; // eax
  float *v7; // eax
  float *v8; // [esp-Ch] [ebp-10h]

  sub_10023E00((char *)this, 76);
  if ( *(_DWORD *)(dword_106E8E74 + 48)
    && (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this)
    && !*(_DWORD *)(this + 2808)
    && sub_10023D10((_DWORD *)this, 10)
    && (*(_DWORD *)(dword_106E8F4C + 48) || *(float *)(this + 4204) <= (double)*(float *)(dword_106B31C8 + 12)) )
  {
    v2 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 220))(v2) != 3 )
    {
      if ( !sub_10050FC0((_DWORD *)(this + 4292))
        || (v3 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this),
            !(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 288))(v3))
        || (v4 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this),
            v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 288))(v4),
            (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v5 + 876))(v5, this)) )
      {
        v6 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
        v8 = (float *)sub_10019640(v6);
        v7 = (float *)sub_10019640((_DWORD *)this);
        if ( sub_10372E50((void *)this, v7, v8, 1, 0) )
          sub_10023CB0((char *)this, 76);
      }
    }
  }
}
