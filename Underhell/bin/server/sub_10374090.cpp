char __thiscall sub_10374090(void *this, float *a2, int a3)
{
  char result; // al
  int savedregs; // [esp+8h] [ebp+0h] BYREF

  result = sub_10373A20((int)this, (int)&savedregs, (int)a2, (int)this, a2);
  if ( result )
    return (*(int (__thiscall **)(void *, float *, int, _DWORD))(*(_DWORD *)this + 2024))(this, a2, a3, 0);
  return result;
}
