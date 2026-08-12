char __thiscall sub_103C7560(_DWORD *this, int a2, int a3)
{
  int v4; // eax
  _DWORD *v5; // eax
  int v6; // edi
  int (__thiscall *v7)(_DWORD *, _DWORD *, _DWORD, _DWORD, _DWORD); // edx
  int v8; // eax
  _DWORD v10[3]; // [esp+20h] [ebp-Ch] BYREF

  v4 = (*(int (__thiscall **)(_DWORD *, int))(*this + 932))(this, 137);
  if ( sub_100C4E90(this, v4) || sub_100697A0(this, 92, 1) || sub_100697A0(this, 105, 1) || sub_100697A0(this, 28, 1) )
  {
    v5 = (_DWORD *)sub_100217F0(this);
    v6 = *this;
    v10[0] = *v5;
    v10[1] = v5[1];
    v7 = *(int (__thiscall **)(_DWORD *, _DWORD *, _DWORD, _DWORD, _DWORD))(v6 + 368);
    v10[2] = v5[2];
    v8 = v7(this, v10, 1.0, 0.2, 0.0);
    (*(void (__thiscall **)(_DWORD *, int))(v6 + 1704))(this, v8);
  }
  return sub_101782E0(a2, a3);
}
