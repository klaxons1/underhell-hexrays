void __thiscall sub_10261B90(void *this, int a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  int v5; // edi
  int v6; // ebx
  int v7; // eax

  if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 204))(this) )
  {
    if ( a2 == 108 )
    {
      v3 = (_DWORD *)sub_10229D00(32);
      if ( v3 )
      {
        v4 = sub_10229D20(v3, (int)"OpenColumnChoiceMenu");
        sub_10236860(this, v4);
      }
      else
      {
        sub_10236860(this, 0);
      }
    }
    else if ( (*(unsigned __int8 (__thiscall **)(void *, int))(*(_DWORD *)this + 964))(this, a2)
           && (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 948))(this) )
    {
      (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 928))(this, 1);
      (*(void (__thiscall **)(void *))(*(_DWORD *)this + 16))(this);
      v5 = dword_1047CA68;
      v6 = *(_DWORD *)dword_1047CA68;
      v7 = (**(int (__thiscall ***)(void *))this)(this);
      (*(void (__thiscall **)(int, int))(v6 + 8))(v5, v7);
    }
  }
}
