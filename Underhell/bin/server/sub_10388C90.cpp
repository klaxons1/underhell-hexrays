void __usercall sub_10388C90(int a1@<ecx>, double a2@<st0>)
{
  int v3; // eax
  float *v4; // eax
  double v5; // st6
  double v6; // st7
  double v7; // st7
  int v8; // edi
  int v9; // ebx
  __int16 v10; // ax
  float v11; // [esp+4h] [ebp-14h]
  __int16 v12; // [esp+4h] [ebp-14h]
  float *v13; // [esp+8h] [ebp-10h]
  float v14; // [esp+8h] [ebp-10h]
  float v15; // [esp+14h] [ebp-4h]

  sub_10020A40((void *)a1);
  if ( sub_100CF660((_DWORD *)a1, (int)"weapon_pistol", 0) )
  {
    if ( !*(_DWORD *)(a1 + 4268) )
    {
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1) )
      {
        v3 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
        v13 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 576))(v3);
        v4 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 576))(a1);
        sub_1004BCD0(v4, v13);
        v5 = 1800.0;
        if ( a2 <= 1800.0 )
        {
          v5 = 180.0;
          if ( a2 >= 180.0 )
            v5 = a2;
          v6 = 180.0;
        }
        else
        {
          v6 = 180.0;
        }
        v7 = (v5 - v6) * 0.00061728398;
        v15 = v7;
        v14 = 0.79999995 * v7 + 1.2;
        v11 = (v7 + 1.0) * 0.60000002;
        sub_100B8C00((float *)(a1 + 2760), v11, v14);
        sub_100B8BE0((_WORD *)(a1 + 2760), (int)(1.0 - v15 + 1.0 + 1.0 - v15 + 1.0), (int)(3.0 * (1.0 - v15) + 5.0));
      }
      else
      {
        v8 = sub_100CF460((_DWORD *)a1);
        v9 = sub_100CF460((_DWORD *)a1);
        v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 1116))(v8);
        v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 1112))(v9);
        sub_100B8BE0((_WORD *)(a1 + 2760), v10, v12);
        sub_100B8C00((float *)(a1 + 2760), 0.60000002, 1.4);
      }
    }
    sub_100B8C20((float *)(a1 + 2760), 0.2, 0.5);
  }
}
