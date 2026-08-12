int __cdecl sub_102EB400(int a1, float a2)
{
  int result; // eax
  _BYTE *v3; // esi
  float *v4; // eax

  result = sub_101811E0("info_darknessmode_lightsource", -1);
  v3 = (_BYTE *)result;
  if ( result )
  {
    *(float *)(result + 800) = a2;
    sub_10260750((char *)result);
    v4 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 576))(a1);
    sub_100E0D20((int)v3, v4);
    (*(void (__thiscall **)(_BYTE *, int, int))(*(_DWORD *)v3 + 140))(v3, a1, -1);
    (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)v3 + 136))(v3);
    result = dword_106E1CF4;
    if ( *(_DWORD *)(dword_106E1CF4 + 48) )
      v3[805] = 1;
  }
  return result;
}
