int __thiscall sub_1035D490(int this)
{
  int result; // eax
  int v3; // edi
  int v4; // edi
  const char *v5; // eax
  char Buffer[512]; // [esp+1Ch] [ebp-200h] BYREF

  result = sub_1003B900((int *)this);
  v3 = result;
  if ( (*(_BYTE *)(this + 236) & 1) != 0 )
  {
    sub_10429A00(Buffer, 0x200u, "morale: %d", *(_DWORD *)(this + 3640));
    sub_100D5DE0((_DWORD *)this, v3, (int)Buffer, 0.0, 255, 255, 255, 255);
    v4 = v3 + 1;
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) )
    {
      v5 = *(const char **)((*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) + 92);
      if ( !v5 )
        v5 = String;
      sub_10429A00(Buffer, 0x200u, "enemy (dist): %s (%g)", (char)v5);
      sub_100D5DE0((_DWORD *)this, v4, (int)Buffer, 0.0, 255, 255, 255, 255);
      return v4 + 1;
    }
    else
    {
      return v4;
    }
  }
  return result;
}
