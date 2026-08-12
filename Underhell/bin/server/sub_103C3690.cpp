void __usercall sub_103C3690(int *a1@<ecx>, int a2@<edi>)
{
  int v3; // eax
  void (__thiscall *v4)(int, int); // edx
  double v5; // st7
  unsigned int v6; // eax
  int v7; // eax
  int v8; // eax
  void (__thiscall *v9)(int, _DWORD *); // edx
  void (__thiscall *v10)(int, int); // edx
  __int64 v11; // [esp+14h] [ebp-7Ch]
  float v12; // [esp+18h] [ebp-78h]
  float v13; // [esp+1Ch] [ebp-74h]
  _DWORD v14[20]; // [esp+28h] [ebp-68h] BYREF
  _BYTE v15[12]; // [esp+78h] [ebp-18h] BYREF
  _BYTE v16[12]; // [esp+84h] [ebp-Ch] BYREF

  sub_10025DD0(a1);
  (*(void (__thiscall **)(int *))(*a1 + 728))(a1);
  v13 = *(float *)(dword_106B31C8 + 12) + 0.050000001;
  sub_100EC4A0(a1, v13, 0);
  sub_100285C0(a1, 0, 1);
  if ( (*(unsigned __int8 (__thiscall **)(int *))(*a1 + 2272))(a1) )
  {
    if ( *((float *)a1 + 938) <= (double)*(float *)(dword_106B31C8 + 12) )
    {
      if ( (a1[63] & 0x800) != 0 )
        sub_100DAE60((int)a1);
      a1[946] = a1[176];
      a1[947] = a1[177];
      a1[948] = a1[178];
      v7 = *a1;
      if ( a1[593] == dword_106EBC74 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(int *))(v7 + 732))(a1) )
        {
          v10 = *(void (__thiscall **)(int, int))(*a1 + 1416);
          *((float *)a1 + 937) = 0.0;
          *((_BYTE *)a1 + 3733) = 0;
          v10((int)a1, dword_106EBC6C);
          if ( sub_1026A890((unsigned int *)a1 + 944) )
          {
            a1[944] = -1;
            *((float *)a1 + 945) = 0.0;
          }
          if ( !sub_103C1260(a1) )
          {
            HIDWORD(v11) = a1;
            LODWORD(v11) = a1;
            sub_1010DD80(a1 + 973, v11, 0.0);
            (*(void (__thiscall **)(int *, int))(*a1 + 2268))(a1, 3);
            sub_100EBE30((int)a1, 2);
            sub_100EC3F0(a1, (int)sub_103BFBC0, 0.0, 0);
            v12 = *(float *)(dword_106B31C8 + 12) + 1.0;
            sub_100EC4A0(a1, v12, 0);
          }
        }
      }
      else
      {
        (*(void (__thiscall **)(int *, int))(v7 + 1416))(a1, dword_106EBC70);
        if ( !sub_103C1260(a1) )
        {
          sub_1023C380(a1, (int)"NPC_FloorTurret.Die", 0.0, 0);
          (*(void (__thiscall **)(int *, int))(*a1 + 1416))(a1, dword_106EBC74);
          sub_1023C380(a1, (int)"NPC_FloorTurret.Retract", 0.0, 0);
          sub_10247EC0(v14);
          v8 = *a1;
          *(float *)&v14[13] = 1.0;
          v9 = *(void (__thiscall **)(int, _DWORD *))(v8 + 268);
          v14[16] = 1;
          v9((int)a1, v14);
        }
      }
    }
    else
    {
      if ( *(float *)(dword_106B31C8 + 12) > (double)*((float *)a1 + 936) )
      {
        v3 = a1[62];
        if ( (v3 & 0x100) != 0 )
        {
          sub_103BF7A0((int)a1);
        }
        else if ( (v3 & 0x200) == 0 )
        {
          sub_103BFAD0(a1);
          sub_10421CE0(a1 + 919, 0, v16);
          sub_10421CE0(a1 + 919, 3, v15);
          v4 = *(void (__thiscall **)(int, int))(*a1 + 1416);
          a1[593] = 0;
          v4((int)a1, dword_106EBC68);
          (*(void (__thiscall **)(int *, _BYTE *, _BYTE *, _DWORD))(*a1 + 2264))(a1, v15, v16, 0);
        }
        *((float *)a1 + 936) = *(float *)(dword_106B31C8 + 12) + 0.050000001;
      }
      if ( (a1[63] & 0x800) != 0 )
        sub_100DAE60((int)a1);
      v5 = ((double (__thiscall *)(int, _DWORD, _DWORD, int))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
             dword_106B31E4,
             -60.0,
             60.0,
             a2);
      v6 = (unsigned int)a1[63] >> 11;
      *((float *)a1 + 946) = v5 + *((float *)a1 + 176);
      if ( (v6 & 1) != 0 )
        sub_100DAE60((int)a1);
      *((float *)a1 + 947) = ((double (__thiscall *)(int, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                               dword_106B31E4,
                               -60.0)
                           + *((float *)a1 + 177);
      sub_103C1260(a1);
    }
  }
  else
  {
    sub_103C2C50(a1);
  }
}
