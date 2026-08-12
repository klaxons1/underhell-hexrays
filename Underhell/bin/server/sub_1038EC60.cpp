int __usercall sub_1038EC60@<eax>(int a1@<ecx>, int a2@<ebx>, int a3@<edi>)
{
  int v4; // eax
  int result; // eax
  int v6; // eax
  float v7; // [esp+10h] [ebp-8h]

  if ( sub_10023D10((_DWORD *)a1, 26) )
  {
    v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
    sub_1038C270((int *)a1, v4);
  }
  result = sub_1038EA70(a1);
  if ( !result )
  {
    if ( *(_BYTE *)(a1 + 4180) )
    {
      if ( sub_10389B80((_DWORD *)a1)
        || (v7 = (float)*(int *)(a1 + 5184), v7 / (double)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 448))(a1) <= 0.2) )
      {
        if ( sub_10023D10((_DWORD *)a1, 21) )
        {
          if ( sub_100B8D10((float *)(a1 + 2760)) )
            return 95;
          else
            return sub_1038E9C0(a1, a2, a3);
        }
        else if ( sub_10023D10((_DWORD *)a1, 23) )
        {
          if ( sub_1001ED60((float *)(a1 + 4200)) )
          {
            *(float *)(a1 + 4344) = 0.0;
            sub_100925F0((float *)(a1 + 4200), 1.0, 1.75);
            return 41;
          }
          else
          {
            return 12;
          }
        }
        else if ( sub_10023D10((_DWORD *)a1, 38) )
        {
          return 24;
        }
        else if ( sub_10023D10((_DWORD *)a1, 3) || sub_10023D10((_DWORD *)a1, 4) )
        {
          sub_10388C20((_DWORD *)a1);
          return 50;
        }
        else if ( sub_10023D10((_DWORD *)a1, 45)
               && !sub_10389B80((_DWORD *)a1)
               && (v6 = sub_10020820((_DWORD *)a1)) != 0
               && *(int *)(v6 + 220) > 0
               && sub_1004AE20((_DWORD *)a1, 12, 13) )
        {
          sub_100AC410(a1 + 5160, "METROPOLICE_SHOOT_COVER", 0, 2);
          return 39;
        }
        else if ( sub_10023D10((_DWORD *)a1, 13)
               && (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1)
               && (*(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1) + 256) & 0x8000) == 0 )
        {
          return 35;
        }
        else
        {
          return sub_1038EB80((_DWORD *)a1);
        }
      }
      else
      {
        *(float *)(a1 + 5188) = 0.0;
        *(_DWORD *)(a1 + 5184) = 0;
        sub_100AC410(a1 + 5160, "METROPOLICE_COVER_HEAVY_DAMAGE", 1, 1);
        return 27;
      }
    }
    else
    {
      return 93;
    }
  }
  return result;
}
