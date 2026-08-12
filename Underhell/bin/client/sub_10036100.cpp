int __thiscall sub_10036100(int this, int a2)
{
  int v3; // eax
  int v4; // edx

  v3 = *(unsigned __int16 *)(this + 118);
  v4 = *(_DWORD *)off_103DCDDC;
  if ( (_WORD)v3 == 0xFFFF )
  {
    (*(void (__stdcall **)(int, int))(v4 + 16))(this + 4, a2);
    return (*(int (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)off_103DCDDC + 104))(
             *(unsigned __int16 *)(this + 118),
             *(unsigned __int8 *)(this + 1111));
  }
  else
  {
    (*(void (__stdcall **)(int, int))(v4 + 52))(v3, a2);
    return (*(int (__stdcall **)(_DWORD))(*(_DWORD *)off_103DCDDC + 48))(*(unsigned __int16 *)(this + 118));
  }
}
