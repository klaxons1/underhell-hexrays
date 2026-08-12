int sub_1013C210()
{
  float v1[3]; // [esp+0h] [ebp-Ch] BYREF

  if ( !dword_1043A260 )
    return Msg("No view anim created\n");
  (*(void (__thiscall **)(int, float *))(*(_DWORD *)dword_1041315C + 76))(dword_1041315C, v1);
  return sub_1013BEE0(dword_1043A260, v1[0], v1[1], v1[2]);
}
