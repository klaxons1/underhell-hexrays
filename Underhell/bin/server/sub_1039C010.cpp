int __thiscall sub_1039C010(int this, char a2)
{
  int result; // eax
  int (__thiscall *v4)(int, void *, int); // eax
  float v5; // [esp+0h] [ebp-Ch]

  v5 = 0.0;
  if ( a2 )
    sub_1023C380((_DWORD *)this, (int)"NPC_PoisonZombie.FootstepRight", v5, 0);
  else
    sub_1023C380((_DWORD *)this, (int)"NPC_PoisonZombie.FootstepLeft", v5, 0);
  result = (*(int (__thiscall **)(int))(*(_DWORD *)this + 2296))(this);
  if ( (_BYTE)result )
  {
    v4 = *(int (__thiscall **)(int, void *, int))(*(_DWORD *)this + 2324);
    *(float *)(this + 3800) = *(float *)(dword_106B31C8 + 12);
    return v4(this, &unk_10677DB4, 2);
  }
  return result;
}
