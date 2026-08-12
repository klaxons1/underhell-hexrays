const char *__usercall sub_101B3650@<eax>(int a1@<ecx>, int a2@<edi>)
{
  const char *result; // eax
  int v4; // ebx
  int v5; // eax
  float *v6; // eax
  float v7; // [esp+0h] [ebp-20h]
  int v8; // [esp+4h] [ebp-1Ch]
  float v9[3]; // [esp+14h] [ebp-Ch] BYREF

  sub_100E38F0((float *)a1);
  if ( (*(_DWORD *)(a1 + 248) & 0x10) == 0 && !sub_101B1470(a1, a2) )
    sub_1025FAC0(a1);
  result = sub_101B0CE0(a1 + 864, (_DWORD *)a1);
  if ( *(_DWORD *)(a1 + 800) )
  {
    v4 = *(_DWORD *)(a1 + 800);
    v8 = (*(int (**)(void))(*(_DWORD *)v4 + 20))();
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 24))(v4);
    v6 = sub_101B03C0(v9, v5, v8);
    *(float *)(a1 + 908) = *(float *)(a1 + 964);
    *(float *)(a1 + 912) = *(float *)(a1 + 968);
    *(float *)(a1 + 916) = *(float *)(a1 + 972);
    *(float *)(a1 + 864) = *v6;
    *(float *)(a1 + 868) = v6[1];
    *(float *)(a1 + 872) = v6[2];
    *(float *)(a1 + 876) = *(float *)(dword_106B31C8 + 12);
    sub_100EC3F0((_DWORD *)a1, (int)sub_101B2710, 0.0, 0);
    v7 = *(float *)(dword_106B31C8 + 12) + 0.090000004;
    return (const char *)sub_100EC4A0((int *)a1, v7, 0);
  }
  return result;
}
