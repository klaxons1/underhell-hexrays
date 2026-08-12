void __thiscall sub_103351D0(int this, _DWORD *a2)
{
  int v3; // eax
  int v4; // edi
  int v5; // eax
  float *v6; // eax

  switch ( *a2 )
  {
    case 0x99:
    case 0x9F:
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 1532))(this) )
      {
        if ( sub_10022C40((_DWORD *)this) )
        {
          v3 = sub_10022C40((_DWORD *)this);
          if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 320))(v3) )
          {
            v4 = sub_10022C40((_DWORD *)this);
            if ( *(_DWORD *)(sub_10022C40((_DWORD *)this) + 216) == *(_DWORD *)(v4 + 220) )
              goto LABEL_24;
          }
        }
        (*(void (__thiscall **)(int, const char *, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this + 2244))(
          this,
          "TLK_HEAL",
          0,
          0,
          0,
          0);
      }
      else if ( (*(_DWORD *)(this + 248) & 0x80000) != 0 )
      {
        (*(void (__thiscall **)(int, const char *, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this + 2244))(
          this,
          "TLK_GIVEAMMO",
          0,
          0,
          0,
          0);
      }
      sub_10039F40((int *)this, dword_106E5B64);
      break;
    case 0x9A:
      *(_BYTE *)(this + 5728) = 0;
      sub_10022750((float *)this, 15.0, 0.0);
      break;
    case 0x9B:
      sub_10039F40((int *)this, *(_DWORD *)(this + 5688));
      break;
    case 0x9C:
      if ( *(const char **)(this + 260) == "citizen_train_2" || sub_100D6190((_DWORD *)this, "citizen_train_2") )
        sub_100374A0((_DWORD *)this, "d1_t01_TrainRide_Sit_Idle");
      else
        sub_100374A0((_DWORD *)this, "d1_t01_TrainRide_Stand");
      goto LABEL_7;
    case 0x9D:
      if ( *(const char **)(this + 260) == "citizen_train_2" || sub_100D6190((_DWORD *)this, "citizen_train_2") )
        sub_100374A0((_DWORD *)this, "d1_t01_TrainRide_Sit_Exit");
      else
        sub_100374A0((_DWORD *)this, "d1_t01_TrainRide_Stand_Exit");
LABEL_7:
      sub_10039F40((int *)this, 171);
      break;
    case 0x9E:
      v5 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 1656))(this);
      if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 8))(v5) )
      {
        v6 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 1656))(this);
        if ( sub_100AC5F0(v6) )
          (*(void (__thiscall **)(int, const char *, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this + 2244))(
            this,
            "TLK_PLDEAD",
            0,
            0,
            0,
            0);
      }
LABEL_24:
      sub_10027CD0((_DWORD *)this, 0);
      break;
    default:
      sub_103953B0(a2);
      break;
  }
}
