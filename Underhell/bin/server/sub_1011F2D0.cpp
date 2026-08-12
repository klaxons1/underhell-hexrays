char *__thiscall sub_1011F2D0(char **this)
{
  char **v2; // edi
  char **v3; // ebx
  char *v4; // eax
  char *v5; // ebx
  char *v6; // eax
  char *v7; // eax
  char *v8; // eax
  char *v9; // eax
  char **v10; // eax
  char **v11; // eax
  char **v12; // eax
  char *result; // eax
  char **v14; // eax
  char v15[4]; // [esp+Ch] [ebp-24h] BYREF
  char v16[4]; // [esp+10h] [ebp-20h] BYREF
  char v17[4]; // [esp+14h] [ebp-1Ch] BYREF
  char v18[4]; // [esp+18h] [ebp-18h] BYREF
  char v19[4]; // [esp+1Ch] [ebp-14h] BYREF
  char v20[4]; // [esp+20h] [ebp-10h] BYREF
  char v21[4]; // [esp+24h] [ebp-Ch] BYREF
  char v22[4]; // [esp+28h] [ebp-8h] BYREF
  char v23[4]; // [esp+2Ch] [ebp-4h] BYREF

  v2 = this + 246;
  if ( (*((unsigned __int8 (__thiscall **)(char **))*this + 182))(this) )
  {
    sub_102609C0(this + 246, "RotDoorSound.DefaultMove");
    v3 = this + 247;
    sub_102609C0(this + 247, "RotDoorSound.DefaultArrive");
    sub_102609C0(this + 233, "RotDoorSound.DefaultLocked");
  }
  else
  {
    sub_102609C0(this + 246, "DoorSound.DefaultMove");
    v3 = this + 247;
    sub_102609C0(this + 247, "DoorSound.DefaultArrive");
    sub_102609C0(this + 233, "DoorSound.DefaultLocked");
  }
  sub_102609C0(this + 235, "DoorSound.Null");
  v4 = *v2;
  if ( !*v2 )
    v4 = (char *)String;
  sub_1023B8B0(v4);
  v5 = *v3;
  if ( !v5 )
    v5 = (char *)String;
  sub_1023B8B0(v5);
  v6 = this[248];
  if ( !v6 )
    v6 = (char *)String;
  sub_1023B8B0(v6);
  v7 = this[249];
  if ( !v7 )
    v7 = (char *)String;
  sub_1023B8B0(v7);
  v8 = this[233];
  if ( !v8 )
    v8 = (char *)String;
  sub_1023B8B0(v8);
  v9 = this[235];
  if ( !v9 )
    v9 = (char *)String;
  sub_1023B8B0(v9);
  switch ( *((_BYTE *)this + 968) )
  {
    case 1:
      v10 = (char **)sub_10162BE0(v23, "NA");
      goto LABEL_18;
    case 2:
      v11 = (char **)sub_10162BE0(v22, "ND");
      goto LABEL_20;
    case 3:
      v12 = (char **)sub_10162BE0(v21, "NF");
      goto LABEL_22;
    case 4:
      v10 = (char **)sub_10162BE0(v20, "NFIRE");
      goto LABEL_18;
    case 5:
      v11 = (char **)sub_10162BE0(v19, "NCHEM");
      goto LABEL_20;
    case 6:
      v12 = (char **)sub_10162BE0(v18, "NRAD");
      goto LABEL_22;
    case 7:
      v10 = (char **)sub_10162BE0(v17, "NCON");
LABEL_18:
      this[234] = *v10;
      break;
    case 8:
      v11 = (char **)sub_10162BE0(v16, "NH");
LABEL_20:
      this[234] = *v11;
      break;
    case 9:
      v12 = (char **)sub_10162BE0(v15, "NG");
LABEL_22:
      this[234] = *v12;
      break;
    default:
      this[234] = 0;
      break;
  }
  result = (char *)(*((unsigned __int8 *)this + 969) - 1);
  switch ( *((_BYTE *)this + 969) )
  {
    case 1:
      result = (char *)sub_10162BE0(v15, "EA");
      goto LABEL_32;
    case 2:
      v14 = (char **)sub_10162BE0(v16, "ED");
      goto LABEL_34;
    case 3:
      result = (char *)sub_10162BE0(v17, "EF");
      goto LABEL_36;
    case 4:
      result = (char *)sub_10162BE0(v18, "EFIRE");
      goto LABEL_32;
    case 5:
      v14 = (char **)sub_10162BE0(v19, "ECHEM");
      goto LABEL_34;
    case 6:
      result = (char *)sub_10162BE0(v20, "ERAD");
LABEL_36:
      this[236] = *(char **)result;
      break;
    case 7:
      result = (char *)sub_10162BE0(v21, "ECON");
LABEL_32:
      this[236] = *(char **)result;
      break;
    case 8:
      v14 = (char **)sub_10162BE0(v22, "EH");
LABEL_34:
      result = *v14;
      this[236] = result;
      break;
    default:
      this[236] = 0;
      break;
  }
  return result;
}
