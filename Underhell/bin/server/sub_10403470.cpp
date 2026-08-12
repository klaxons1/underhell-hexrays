void __usercall sub_10403470(int a1@<ecx>, float a2@<ebx>)
{
  int v3; // eax
  int v4; // edi
  int v5; // eax
  int v6; // eax
  double v7; // [esp+10h] [ebp-8h] BYREF

  if ( *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(a1 + 1136) )
  {
    v3 = sub_100D1940((_DWORD *)a1);
    v4 = v3;
    if ( v3 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 320))(v3) )
      {
        if ( *(_BYTE *)(a1 + 1393) && (*(_DWORD *)(v4 + 3296) & 0x800) != 0 )
        {
          v7 = *(float *)(dword_106B31C8 + 12) + 0.5;
          sub_100D2DA0((float *)(a1 + 1132), &v7);
          v7 = *(float *)(dword_106B31C8 + 12) + 0.5;
          sub_1016A120((float *)(a1 + 1136), &v7);
          sub_103FEC80(*(float *)&a1, 1, 0);
          sub_103FF610((_DWORD *)a1, a2);
          *(_DWORD *)(a1 + 9828) = 2;
          if ( *(_BYTE *)(dword_106B3CDC + 12) == 1 )
            sub_103FE6A0((_DWORD *)a1);
          else
            sub_103FDD20((_DWORD *)a1);
          (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 944))(a1, 181);
        }
        else
        {
          v5 = sub_104024B0(a1);
          if ( v5 )
          {
            v6 = v5 - 1;
            if ( v6 )
            {
              if ( v6 == 1 )
              {
                *((float *)&v7 + 1) = *(float *)(dword_106B31C8 + 12) + 0.0099999998;
                sub_100D2D50((float *)(a1 + 1136), (float *)&v7 + 1);
              }
            }
            else
            {
              *((float *)&v7 + 1) = *(float *)(dword_106B31C8 + 12) + 0.1;
              sub_100D2D50((float *)(a1 + 1136), (float *)&v7 + 1);
              sub_10401510(a1, a2);
            }
          }
          else
          {
            (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a1 + 1132))(a1, 12, 0.0);
            (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 944))(a1, 181);
            *((float *)&v7 + 1) = *(float *)(dword_106B31C8 + 12) + 0.5;
            sub_100D2D50((float *)(a1 + 1136), (float *)&v7 + 1);
            *(_DWORD *)(a1 + 1408) |= *(_DWORD *)(v4 + 3292);
          }
          sub_103FF610((_DWORD *)a1, a2);
          *(_DWORD *)(a1 + 9828) = 3;
          if ( *(_BYTE *)(dword_106B3CDC + 12) == 1 )
            sub_103FE400((_DWORD *)a1);
          else
            sub_103FE090((_DWORD *)a1);
        }
      }
    }
  }
}
