bool __thiscall sub_1001FBD0(void *this, int a2, char a3)
{
  int v4; // eax

  if ( !a3 || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 284))(a2) )
    return 1;
  v4 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 1080))(this, a2);
  return v4 == 1 || v4 == 2 || v4 == 4;
}
