void __userpurge sub_10154CE0(int a1@<ecx>, int a2@<edi>, float a3)
{
  int v4; // eax
  int v5; // ebx
  double v6; // st7
  int v7; // eax
  int v8; // edx
  int v9; // eax
  int v10; // ebx
  int v11; // eax
  int v12; // edi
  int v13; // ebx
  int v14; // ecx
  __int64 v15; // [esp-8h] [ebp-28h]
  int v16; // [esp+0h] [ebp-20h]
  unsigned __int64 v17; // [esp+10h] [ebp-10h] BYREF
  unsigned __int64 v18; // [esp+18h] [ebp-8h]
  int savedregs; // [esp+20h] [ebp+0h] BYREF

  (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 128))(a1);
  HIDWORD(v18) = sub_10076740();
  *(float *)(a1 + 1236) = (double)SHIDWORD(v18) * 0.5;
  if ( 0.0 != a3 )
    sub_10151270();
  v4 = *(_DWORD *)(a1 + 1232);
  if ( v4 == 2 )
  {
    sub_101525A0(a1, (int)&savedregs, a2, a1);
  }
  else if ( v4 != 3 )
  {
    if ( *(_DWORD *)(dword_1043CDD4 + 48) )
    {
      v5 = sub_10073890();
      v6 = *(float *)(v5 + 1216) - *(float *)(sub_10073890() + 1204);
    }
    else
    {
      v7 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 264))(a1);
      v8 = *(_DWORD *)a1;
      *((float *)&v18 + 1) = *(float *)(v7 + 8);
      v6 = *((float *)&v18 + 1) - *(float *)((*(int (__thiscall **)(int))(v8 + 260))(a1) + 8);
    }
    *(float *)(a1 + 1212) = v6 / *(float *)(a1 + 1220);
    if ( *(_DWORD *)(dword_1043CEAC + 48) )
    {
      HIDWORD(v18) = &v17;
      v17 = __rdtsc();
      sub_10154A60((float *)a1, (int)&savedregs, a3);
      v9 = *(_DWORD *)(a1 + 1232);
      if ( v9 )
      {
        if ( v9 == 1 )
        {
          v13 = *(unsigned __int16 *)(a1 + 1256);
          if ( v13 != 0xFFFF )
          {
            do
            {
              v14 = *(_DWORD *)(a1 + 1244);
              HIDWORD(v18) = *(unsigned __int16 *)(v14 + 48 * (unsigned __int16)v13 + 46);
              if ( !sub_10150E50((float *)(v14 + 48 * (unsigned __int16)v13), a3) )
              {
                sub_10153720((int *)(a1 + 1244), v13);
                *(_WORD *)(*(_DWORD *)(a1 + 1244) + 48 * (unsigned __int16)v13 + 46) = *(_WORD *)(a1 + 1260);
                *(_WORD *)(a1 + 1260) = v13;
              }
              LOWORD(v13) = WORD2(v18);
            }
            while ( HIDWORD(v18) != 0xFFFF );
          }
        }
      }
      else
      {
        v10 = *(unsigned __int16 *)(a1 + 1256);
        if ( v10 != 0xFFFF )
        {
          do
          {
            v11 = *(_DWORD *)(a1 + 1244);
            v12 = 48 * (unsigned __int16)v10;
            HIDWORD(v18) = *(unsigned __int16 *)(v11 + v12 + 46);
            if ( !sub_10154480(a1, (float *)(v12 + v11), a3) )
            {
              sub_10153720((int *)(a1 + 1244), v10);
              *(_WORD *)(v12 + *(_DWORD *)(a1 + 1244) + 46) = *(_WORD *)(a1 + 1260);
              *(_WORD *)(a1 + 1260) = v10;
            }
            LOWORD(v10) = WORD2(v18);
          }
          while ( HIDWORD(v18) != 0xFFFF );
        }
      }
      if ( *(_DWORD *)(dword_1043CF3C + 48) )
      {
        v18 = __rdtsc();
        v16 = *(unsigned __int16 *)(a1 + 1262);
        v17 = v18 - v17;
        HIDWORD(v15) = g_ClockSpeed[1];
        LODWORD(v15) = g_ClockSpeed[0];
        (*(void (**)(int, int, const char *, ...))(*(_DWORD *)dword_1041315C + 116))(
          dword_1041315C,
          15,
          "Rain simulation: %du (%d tracers)",
          (unsigned int)((__int64)(1000000 * v17) / v15),
          v16);
      }
    }
  }
}
