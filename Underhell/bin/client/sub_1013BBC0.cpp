int sub_1013BBC0()
{
  _DWORD v1[3]; // [esp+0h] [ebp-Ch] BYREF

  *(float *)&v1[1] = flt_10459250;
  *(float *)v1 = flt_1045924C;
  *(float *)&v1[2] = flt_10459254;
  return (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)dword_1041315C + 80))(dword_1041315C, v1);
}
