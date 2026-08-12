void __thiscall sub_101B3750(int this, int a2, int a3, char a4)
{
  int v5; // ebx
  int v6; // eax
  float *v7; // eax
  int v8; // eax
  int v9; // eax
  float v10; // [esp+0h] [ebp-2Ch]
  int v11; // [esp+4h] [ebp-28h]
  float v12[3]; // [esp+14h] [ebp-18h] BYREF
  int v13; // [esp+20h] [ebp-Ch] BYREF
  float v14; // [esp+24h] [ebp-8h]
  float v15; // [esp+28h] [ebp-4h]

  if ( *(_DWORD *)(this - 60) )
  {
    if ( a4 )
    {
      if ( -1.0 == sub_100E9200((_DWORD *)(this - 860), 0) )
      {
        if ( (*(_DWORD *)(this - 608) & 0x800) != 0 )
          sub_100DAE60(this - 860);
        *(float *)&v13 = *(float *)(this + 4) - *(float *)(this - 280);
        v14 = *(float *)(this + 8) - *(float *)(this - 276);
        v15 = *(float *)(this + 12) - *(float *)(this - 272);
        off_10689714();
        sub_1025F3D0((int)&v13, 0.0020000001);
        v5 = *(_DWORD *)(this - 60);
        v11 = (*(int (**)(void))(*(_DWORD *)v5 + 20))();
        v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 24))(v5);
        v7 = sub_101B0370(v12, v6, v11);
        *(float *)(this + 68) = *(float *)&v13;
        *(float *)(this + 72) = v14;
        *(float *)(this + 76) = v15;
        *(float *)(this + 24) = *v7;
        *(float *)(this + 28) = v7[1];
        *(float *)(this + 32) = v7[2];
        *(float *)(this + 36) = *(float *)(dword_106B31C8 + 12);
        sub_100EC3F0((_DWORD *)(this - 860), (int)sub_101B2810, 0.0, 0);
        v10 = *(float *)(dword_106B31C8 + 12) + 0.090000004;
        sub_100EC4A0((int *)(this - 860), v10, 0);
      }
    }
    else if ( -1.0 != sub_100E9200((_DWORD *)(this - 860), 0) )
    {
      v8 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this - 60) + 24))(*(_DWORD *)(this - 60));
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v8 + 8))(v8) )
      {
        v9 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this - 60) + 20))(*(_DWORD *)(this - 60));
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v9 + 8))(v9) )
        {
          sub_101B0DF0((_DWORD *)(this + 24), this - 860);
          sub_100EC4A0((int *)(this - 860), -1.0, 0);
        }
      }
    }
  }
}
