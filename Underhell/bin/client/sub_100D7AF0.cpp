int sub_100D7AF0()
{
  int result; // eax
  float v1[3]; // [esp+0h] [ebp-Ch] BYREF

  result = dword_10433944;
  if ( !*(_DWORD *)(dword_10433944 + 48) )
  {
    result = (*(int (__thiscall **)(int *))(*off_103ED0D8 + 164))(off_103ED0D8);
    if ( !result )
    {
      (*(void (__thiscall **)(int, float *))(*(_DWORD *)dword_1041315C + 76))(dword_1041315C, v1);
      v1[0] = 0.0;
      return (*(int (__thiscall **)(int, float *))(*(_DWORD *)dword_1041315C + 80))(dword_1041315C, v1);
    }
  }
  return result;
}
