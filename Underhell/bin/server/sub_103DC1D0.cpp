bool __thiscall sub_103DC1D0(float *this, char *a2, char a3)
{
  int savedregs; // [esp+8h] [ebp+0h] BYREF

  return (*(int (__thiscall **)(float *, char *))(*(_DWORD *)this + 1080))(this, a2) == 1
      && (*(unsigned __int8 (__thiscall **)(float *, char *))(*(_DWORD *)this + 876))(this, a2)
      && sub_103DB2C0(this, (int)&savedregs, (int)a2, (int)this, a2)
      && sub_1001FBD0(this, (int)a2, a3);
}
