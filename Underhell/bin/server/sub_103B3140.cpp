char __thiscall sub_103B3140(char *this, int a2, float *a3, int a4)
{
  float *v4; // edi
  int v6; // eax
  int v7; // edx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v12; // [esp+0h] [ebp-20h]
  float v13[3]; // [esp+14h] [ebp-Ch] BYREF
  int v14; // [esp+30h] [ebp+10h]
  int v15; // [esp+30h] [ebp+10h]

  v4 = (float *)a4;
  if ( a4 && (*(char **)(a4 + 92) == "npc_cscanner" || sub_100D6240((_DWORD *)a4, "npc_cscanner")) )
  {
    sub_1023C380(this, (int)"NPC_Strider.Alert", 0.0, 0);
    v13[0] = *a3;
    v13[1] = a3[1];
    v13[2] = a3[2] + 32.0;
    v6 = sub_103B0630(this);
    sub_100E0D20(v6, v13);
    sub_10023CB0(this, 80);
    v7 = *(_DWORD *)this;
    *((float *)this + 983) = *(float *)(dword_106B31C8 + 12) + 20.0;
    v14 = v7;
    v8 = sub_103B0630(this);
    (*(void (__thiscall **)(char *, int, int, int))(v14 + 1120))(this, v8, 1, -1);
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2) )
      sub_100B8FC0((int)(this + 3936), 0);
    v9 = sub_103B0630(this);
    v15 = v9;
    if ( (*(_DWORD *)(v9 + 252) & 0x800) != 0 )
    {
      sub_100DAE60(v9);
      v9 = v15;
    }
    v12 = v9 + 580;
    v10 = sub_103B0630(this);
    sub_100206F0((float *)this, v10, v12, v4);
    v4 = (float *)this;
  }
  return sub_100206F0((float *)this, a2, (int)a3, v4);
}
