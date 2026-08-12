bool __thiscall sub_103440A0(_DWORD *this, char *a2, char a3)
{
  int savedregs; // [esp+8h] [ebp+0h] BYREF

  return (*(int (__thiscall **)(_DWORD *, char *))(*this + 1080))(this, a2) == 1
      && (*(unsigned __int8 (__thiscall **)(_DWORD *, char *))(*this + 876))(this, a2)
      && sub_10343AE0(this, (int)&savedregs, (int)a2, (int)this, a2)
      && sub_1001FBD0(this, (int)a2, a3);
}
