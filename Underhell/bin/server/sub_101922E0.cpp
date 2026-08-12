void __stdcall sub_101922E0(float *a1, int a2)
{
  int v2; // eax
  int v3; // esi
  float *v4; // edi
  float *v5; // eax
  float *v6; // eax
  float v7[3]; // [esp+4h] [ebp-Ch] BYREF

  if ( a1 && a2 )
  {
    v2 = sub_1025FC50();
    v3 = v2;
    if ( v2 )
    {
      v4 = (float *)sub_101E7560(v2);
      v5 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 508))(v3);
      v7[0] = *v4 + *v5;
      v7[1] = v4[1] + v5[1];
      v7[2] = v4[2] + v5[2];
      sub_10422220(v7, a2);
      v6 = (float *)(*(int (__thiscall **)(int, float *))(*(_DWORD *)v3 + 504))(v3, v7);
      *a1 = *v6;
      a1[1] = v6[1];
      a1[2] = v6[2];
    }
  }
}
