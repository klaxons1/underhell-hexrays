int __thiscall sub_1026FEB0(void *this, char *String1)
{
  int v3; // edi
  int result; // eax
  _DWORD *v5; // ecx
  int (__thiscall **v6)(void *); // edi
  int v7; // eax

  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA68 + 72))(dword_1047CA68);
  if ( v3 == (**(int (__thiscall ***)(void *))this)(this) )
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_1047CA68 + 80))(dword_1047CA68);
  result = _stricmp(String1, "OnOk");
  if ( result )
  {
    result = _stricmp(String1, "OnCancel");
    if ( result )
      goto LABEL_9;
    v5 = (_DWORD *)*((_DWORD *)this + 113);
    if ( !v5 )
      goto LABEL_9;
  }
  else
  {
    v5 = (_DWORD *)*((_DWORD *)this + 112);
    if ( !v5 )
      goto LABEL_9;
  }
  v6 = *(int (__thiscall ***)(void *))this;
  v7 = sub_1022AD00(v5);
  result = ((int (__thiscall *)(void *, int))v6[45])(this, v7);
LABEL_9:
  if ( (*((_BYTE *)this + 460) & 1) == 0 )
    return (*(int (__thiscall **)(void *))(*(_DWORD *)this + 1060))(this);
  return result;
}
