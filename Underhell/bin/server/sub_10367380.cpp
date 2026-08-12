int __thiscall sub_10367380(int this, int a2)
{
  int v2; // esi
  int result; // eax
  int v4; // esi
  float v5; // [esp+0h] [ebp-10h]

  v2 = this;
  switch ( a2 )
  {
    case 34:
      if ( fabs(*(float *)((*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) + 724) - *(float *)(this + 724)) <= 128.0 )
      {
        this = v2;
        goto LABEL_15;
      }
      result = 17;
      break;
    case 41:
      result = (*(_BYTE *)(this + 3776) == 1) + 191;
      break;
    case 43:
      v5 = 0.0;
      if ( *(_BYTE *)(this + 3996) )
      {
        sub_1023C380((_DWORD *)this, (int)"NPC_FastZombie.RangeAttack", v5, 0);
      }
      else
      {
        sub_1023C380((_DWORD *)this, (int)"NPC_FastZombie.Scream", v5, 0);
        *(_BYTE *)(v2 + 3996) = 1;
      }
      result = 188;
      break;
    case 189:
      v4 = *(_DWORD *)(this + 2372);
      if ( v4 == 34 || v4 == 35 || v4 == 36 )
        result = 190;
      else
        result = 189;
      break;
    default:
LABEL_15:
      result = sub_1032F1C0((_DWORD *)this, a2);
      break;
  }
  return result;
}
